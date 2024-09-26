class MyCalendar {
    vector<pair<int, int>> m_vEvents;

public:
    MyCalendar() {}

    bool book(int start, int end) {
        for (pair<int,int> it : m_vEvents) {
            int intersectStart = max(it.first, start);
            int intersectEnd = min(it.second, end);
            if (intersectStart < intersectEnd)
                return false;
        }
        m_vEvents.push_back({start, end});
        return true;

    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */