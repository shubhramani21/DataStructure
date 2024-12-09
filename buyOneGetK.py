def mini_cost(price, k):
    n = len(price)
    
    # Sort prices in ascending order to minimize cost
    price.sort()
    
    # Result array to store the minimum cost for each m
    ans = [0] * n
    
    # Total cost accumulator
    total_cost = 0
    
    # Iterate over each m (from 1 to n)
    for m in range(1, n + 1):
        # Every group of (k+1) items, pay for k and get 1 for free
        total_cost += price[m - 1]  # Add the current price to the total cost
        
        # If we have bought a full group of k + 1 items, we get one for free
        if m % (k + 1) == 0:
            total_cost -= price[m - (k + 1)]  # Subtract the cheapest item in the group (because it's free)
        
        # Store the result for m items
        ans[m - 1] = total_cost
    
    return ans

# Example usage
prices = [4, 1, 6, 10, 2]
k = 1
result = mini_cost(prices, k)
print(result)
