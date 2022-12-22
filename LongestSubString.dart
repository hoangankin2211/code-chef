class LongestSubstring {
  static int lengthOfLongestSubstring(String s) {
    int result = 0;

    int count = 0;
    Map<String, int> map = {};

    for (int i = 0; i < s.length; i++) {
      if (!map.containsKey(s[i])) {
        count++;
        if (i == s.length - 1 && result < count) {
          result = count;
        }
      } else {
        if (result < count) {
          result = count;
        }
        i = map[s[i]]! + 1;
        map.clear();
        count = 1;
      }
      map.addAll({s[i]: i});
    }
    return result;
  }
}

void main() {
  print(LongestSubstring.lengthOfLongestSubstring("pwwkew"));
}
