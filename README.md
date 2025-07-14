## Secured

The first-year Epitech project called "secured" is a [hashtable](https://www.geeksforgeeks.org/dsa/hash-table-data-structure/) implementation in C.

In my implementation I use **separate chaining method** (the hashtable has an array of **buckets**, and each bucket is a **linked list** of **nodes**). A **node** has a key, value and a pointer to the next element.

The hashtable has a **fixed size** that you pass as a parameter when creating it.

> [!NOTE]
> All the code here is compliant with Epitech's **coding style**. It hasn't been tested against the automated test suite, so it hasn't received a score. This is a (recently created) **first-year** project that I'm doing in my **fifth year** just for fun (and because I missed programming in C ;) ).

To compile use the command :

```
make
```

A `libhashtable.a` static library will be generated, allowing you to use the provided functions by **linking** it to your project.

It will also output an executable named `a.out` for testing purposes. It's built from the [main.c](/src/main.c) file, which you can try out, modify or ignore as you wish.

The following features were implemented :

- [x] Fundamental **hashing** function.
- [x] All hashtable handling **operations** required by the original subject (insert, delete, search and dump).
- [x] **Collision** handling :
    - If a node with the same **key** (= the same resulting **hash**) already exists, its **value** is **updated**.
    - If **different keys** produce the **same bucket index** after modulo operation (which limits the index to the fixed size of the hashtable), the new element is inserted as the next node in the linked list (separate chaining).
- [x] Use of only the **allowed functions** specified by the subject: **write, malloc, and free**.

The **hashing** algorithm implemented here is **[DJB2](https://theartincode.stanis.me/008-djb2/)**.

The following functions were implemented :

- `new_hashtable` : creates a new hashtable
- `delete_hashtable` : deletes a hashtable

- `ht_insert` : inserts an element into the hashtable
- `ht_delete` : deletes an element from the hashtable
- `ht_search` : searches for an element in the hashtable (by **key**)
- `ht_dump` : lists all elements in the hashtable

You can find the function signatures in the [hashtable.h](/include/hashtable.h) header file.

## License

> [!WARNING]
> **Epitech students:** This code is provided for **educational purposes only**. Do not copy or submit this as your own work. I am not responsible for any misuse or academic consequences resulting from improper use.

This project is licensed under the **MIT** License - see the [LICENSE](/LICENSE) file for details.