def categorize_task(description):
    # Convert the description to lowercase to make the matching case-insensitive
    description = description.lower()
    
    # Check for keywords that indicate supervised learning
    if "predict" in description or "based on features" in description or "target variable" in description:
        return "Supervised Learning"
    
    # Check for keywords that indicate unsupervised learning
    elif "grouping" in description or "clustering" in description or "similarity" in description:
        return "Unsupervised Learning"
    
    # Default case (in case no matching keywords are found)
    return "Unknown Category"

# Example input
description = "Predict the price of a house based on features like size, location, and age."

# Calling the function with the input
category = categorize_task(description)

print(category)
