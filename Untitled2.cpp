#include <map>
template<typename K, typename V>
class interval_map {
	friend void IntervalMapTest();
	V m_valBegin;
	std::map<K,V> m_map;
public:
	// constructor associates whole range of K with val
	template<typename V_forward>
	interval_map(V_forward&& val)
	: m_valBegin(std::forward<V_forward>(val))
	{}

	// Assign value val to interval [keyBegin, keyEnd).
	// Overwrite previous values in this interval.
	// Conforming to the C++ Standard Library conventions, the interval
	// includes keyBegin, but excludes keyEnd.
	// If !( keyBegin < keyEnd ), this designates an empty interval,
	// and assign must do nothing.
	template<typename V_forward>
	void assign( K const& keyBegin, K const& keyEnd, V_forward&& val )
		requires (std::is_same<std::remove_cvref_t<V_forward>, V>::value)
	{
		if (!(keyBegin < keyEnd)) return;

		auto itLow = m_map.lower_bound(keyBegin);
		auto itHigh = m_map.lower_bound(keyEnd);

		V newVal = std::forward<V_forward>(val);
		bool insertNewVal = (itLow == m_map.begin() || (--itLow)->second != newVal);
		if (itHigh != m_map.end() && itHigh->second == newVal) {
			++itHigh;
		} else {
			++itLow;
		}

		if (insertNewVal) {
			m_map[keyBegin] = newVal;
		}

		m_map.erase(itLow, itHigh);
		if (insertNewVal) {
			m_map[keyEnd] = (itHigh == m_map.end()) ? m_valBegin : itHigh->second;
		}
	}

	// look-up of the value associated with key
	V const& operator[]( K const& key ) const {
		auto it=m_map.upper_bound(key);
		if(it==m_map.begin()) {
			return m_valBegin;
		} else {
			return (--it)->second;
		}
	}
};
