def create_concept_representation(data, labels):
    concept_rep = {}
    
    for point, label in zip(data, labels):
        if label not in concept_rep:
            concept_rep[label] = []
        concept_rep[label].append(point)
    
    return concept_rep

# Example input
data = [1, 2, 3, 4, 5]
labels = ["A", "B", "A", "B", "A"]

# Calling the function with the input
concept_representation = create_concept_representation(data, labels)

print(concept_representation)
