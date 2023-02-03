#!/usr/bin/python3

def djb2(string):
    hash = 5381
    for ch in string:
        ch = ord(ch)
        hash = ((hash << 5) + hash) + ch
    return hash

def key_index(string, table_size):
    hash_index = djb2(string)
    return hash_index % table_size

def main():
    s = "dram"
    hash_index = djb2(s)
    print("{}".format(hash_index))
    key_pos = key_index(s, 1024)
    print("{}".format(key_pos))
    s = "vivency"
    key_pos = key_index(s, 1024)
    print("{}".format(key_pos))
main()
