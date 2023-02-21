# Hashing

Hashing is a powerful technique used to efficiently store and retrieve data by mapping keys to corresponding values. It is particularly useful when we need to repeatedly fetch different data, as it provides a quick and effective solution.

One of the most common applications of hashing is in the implementation of an associative array, known as a hash table, which enables fast search and insertion operations. This is achieved by converting a key into an index of an array, where the corresponding value is stored.

## Integer Keys

When working with integer keys, we can use a fixed-size hash array to map index to the number frequency. However, there is a limit to the maximum size of the array, which is typically 10^6 if declared inside a main function, or 10^7 if declared globally. Fortunately, there are alternative approaches that can be used.

## Character Hashing

For character hashing, we can map each character to an index using the ASCII standard. For example, we can set 'a' to be index 0, 'b' to be index 1, and so on, up to 'z' at index 25. To find the index value of any given character, we can simply subtract the ASCII value
