def binarize(numbers, threshold):
    # Apply the threshold to binarize the list
    return [1 if num >= threshold else 0 for num in numbers]

# Example usage
input_list = [1.5, 2.3, 0.8, 3.0]
threshold = 2.0
binarized_list = binarize(input_list, threshold)
print(binarized_list)
