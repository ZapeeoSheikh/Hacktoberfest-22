
"""
Author: Abhishek

Program to solve the fractinal knapsack problem
"""
def fractional_knap(value, weight, capacity):
    index = list(range(len(value)))
    # contains ratios of values to weight
    ratio = [v/w for v, w in zip(value, weight)]
    # index is sorted according to value-to-weight ratio in decreasing order
    index.sort(key=lambda i: ratio[i], reverse=True)

    max_value = 0
    fractions = [0]*len(value)
    for i in index:
        if weight[i] <= capacity:
            fractions[i] = 1
            max_value += value[i]
            capacity -= weight[i]
        else:
            fractions[i] = capacity/weight[i]
            max_value += value[i]*capacity/weight[i]
            break

    return max_value, fractions

if __name__ == "__main__":
    values = [10, 2, 20, 40]
    weights = [2, 4, 1, 2]
    capacity = 35

    print(fractional_knap(values, weights, capacity))
