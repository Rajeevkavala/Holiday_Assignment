def predict_y(m, c, x):
    # Calculate the predicted y value using the formula y = mx + c
    y = m * x + c
    return y

# Example input
m = 2.5   # slope
c = 1.0   # y-intercept
x = 4.0   # input value

# Calling the function with the input values
predicted_y = predict_y(m, c, x)

print(predicted_y)
