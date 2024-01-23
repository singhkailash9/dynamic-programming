def generate(n: int):
    pascal_list = [[1]]   # Initializing Pascal's Triangle
    # Generate subsequent rows (excluding the first row).
    for _ in range(n-1):
        # Temporary list by padding the previous row with zeros on both sides
        temp = [0] + pascal_list[-1] + [0]
        # Generating the Current Row
        row = [temp[j] + temp[j + 1] for j in range(len(pascal_list[-1]) + 1)]
        # Append the generated row to Pascal's Triangle.
        pascal_list.append(row)
    return pascal_list

n = int(input("Enter the number of rows "))
print(generate(n))