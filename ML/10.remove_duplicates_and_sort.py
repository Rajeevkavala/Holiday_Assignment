def remove_duplicates_and_sort(data):
    # Remove duplicates by converting the list to a set, then sort the result
    sorted_data = sorted(set(data))
    return sorted_data

# Example input
data = [4, 2, 2, 8, 3, 3, 1]

# Calling the function with the input
result = remove_duplicates_and_sort(data)

print(result)
