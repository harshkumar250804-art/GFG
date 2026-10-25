#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        // Sort meetings by their start times
        sort(meetings.begin(), meetings.end());

        // Min-heap for unused rooms: stores room indices
        priority_queue<int, vector<int>, greater<int>> unusedRooms;
        for (int i = 0; i < n; ++i) {
            unusedRooms.push(i);
        }

        // Min-heap for busy rooms: stores pair of {end_time, room_index}
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> busyRooms;

        // Vector to store the number of meetings held in each room
        vector<int> meetingCount(n, 0);

        for (const auto& meeting : meetings) {
            long long start = meeting[0];
            long long end = meeting[1];
            long long duration = end - start;

            // Free up rooms that have completed their meetings before the current meeting starts
            while (!busyRooms.empty() && busyRooms.top().first <= start) {
                unusedRooms.push(busyRooms.top().second);
                busyRooms.pop();
            }

            if (!unusedRooms.empty()) {
                // Assign the meeting to the available room with the smallest index
                int room = unusedRooms.top();
                unusedRooms.pop();
                busyRooms.push({start + duration, room});
                meetingCount[room]++;
            } else {
                // Delay the meeting until the earliest room becomes available
                auto [earliestEnd, room] = busyRooms.top();
                busyRooms.pop();
                busyRooms.push({earliestEnd + duration, room});
                meetingCount[room]++;
            }
        }

        // Find the room with the maximum number of meetings
        int maxMeetings = 0;
        int resultRoom = 0;

        for (int i = 0; i < n; ++i) {
            if (meetingCount[i] > maxMeetings) {
                maxMeetings = meetingCount[i];
                resultRoom = i;
            }
        }

        return resultRoom;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna