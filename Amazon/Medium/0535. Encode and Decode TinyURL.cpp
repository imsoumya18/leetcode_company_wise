class Solution
{
    public:
        vector<string> en;
   	// Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        en.push_back(longUrl);
        return "q" + to_string(en.size() - 1);
    }

   	// Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return en[stoi(shortUrl.substr(1))];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
