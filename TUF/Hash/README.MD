# Hashing

Hashing is a powerful technique used to efficiently store and retrieve data by mapping keys to corresponding values. It is particularly useful when we need to repeatedly fetch different data, as it provides a quick and effective solution.

One of the most common applications of hashing is in the implementation of an associative array, known as a hash table, which enables fast search and insertion operations. This is achieved by converting a key into an index of an array, where the corresponding value is stored.

## Integer Keys

When working with integer keys, we can use a fixed-size hash array to map index to the number frequency. However, there is a limit to the maximum size of the array, which is typically 10^6 if declared inside a main function, or 10^7 if declared globally. Fortunately, there are alternative approaches that can be used.

## Character Hashing

For character hashing, we can map each character to an index using the ASCII standard. For example, we can set 'a' to be index 0, 'b' to be index 1, and so on, up to 'z' at index 25. To find the index value of any given character, we can simply subtract the ASCII value

## Using Map as a Data Structure for Counting Frequencies

So far we've been discussing number and character hashing using an array. However, when we need to store more than 10^8 elements, a static array data structure won't work. In such cases, we can use a `map<key, value>` pair instead of a static array.

Here, the `key` represents the number whose frequency we need to find, and `value` represents the frequency of that number. Let's understand how it works with an example. Consider an integer array `1, 2, 3, 1, 3, 2` and the `map<int, int> mymap`.

Initially, `mymap[1]` doesn't exist in the map. So, by default, its frequency is 0. We can store it in the map with its frequency set to 1. If it already exists, we can increase its frequency by 1. In general, we can do this for an array as follows:
`mymap[key-->value]`, for example:
- `mymap[1]++;` i.e. `mymap[1---->1]`
- `mymap[2]++;` `mymap[2---->1]`
- `mymap[3]++;` `mymap[3---->1]`
- `mymap[1]++;` `mymap[1---->2]`
- `mymap[3]++;` `mymap[3---->2]`
- `mymap[2]++;` `mymap[2---->2]`

So, in general, we can do as below for an array: 
`mymap[arr[i]]++;`


As a result, the `mymap` will look like this:

| Key | Value |
| --- | --- |
| 1 | 2 |
| 2 | 2 |
| 3 | 2 |

Note that `map` stores the elements in sorted order.

If we talk about the time complexity, `map` takes O(log n) time to fetch and store the elements, where `n` is the number of elements. 

Alternatively, we can use `unordered_map<key, value>` as another data structure. It usually takes O(1) or constant time in the best and average case. However, in the worst case, it takes O(n) time, which is rare and happens only when there are a lot of collisions in the hashing technique. 

Here's an example code snippet for using `map`:

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
// input values
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // Precomputation 
    unordered_map<int, int> mymap;
    for(int i=0;i<n;i++){
        mymap[arr[i]]++; // this can be done in upper for loop as well
    }
    // Query
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        // Fetch the value;
        cout << "Frequency of the given number is" << endl;
        cout << mymap[num] << endl;
    }
}
```

Hashing 




