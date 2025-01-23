def approximate_f(inputs):
    # Define the function f(x) = 2x + 3
    return [2 * x + 3 for x in inputs]

# Example input list
inputs = [1, 2, 3]

# Calling the function with the inputs
outputs = approximate_f(inputs)

print(outputs)
