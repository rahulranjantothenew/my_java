import numpy as np

R = int(input("Enter the number of rows:"))
C = int(input("Enter the number of columns:"))

print("Enter the entries in a single line (separated by space): ")
entries = list(map(int, input().split()))
matrix = np.array(entries).reshape(R, C)
print(matrix)