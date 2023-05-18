import sys

def generate_key(username):
    key = ""
    for char in username:
        key += chr(ord(char) ^ 0x10)
    return key

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./keygen5 username")
        sys.exit(1)

    username = sys.argv[1]
    key = generate_key(username)
    print(key)
