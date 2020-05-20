class StockSpanner {
public:
    StockSpanner() {
    }
    stack<int> prices;
    stack<int> weights;
    int next(int price) {
        int w=1;
        while(!prices.empty()&&prices.top()<=price)
        {
            prices.pop();
            w+=weights.top();
            weights.pop();
        }
        prices.push(price);
        weights.push(w);
        return w;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
