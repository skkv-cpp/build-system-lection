import subprocess
import random
import string
import sys

def generate_random_name(length=8):
    """Generate a random name of specified length."""
    return ''.join(random.choices(string.ascii_letters, k=length))

def main(path):
    random_name = generate_random_name()
    print(f"Generated name: {random_name}")
    
    try:
        subprocess.run([path, random_name], check=True)
    except FileNotFoundError:
        print("Error: 'hello' program not found")
    except subprocess.CalledProcessError as e:
        print(f"Error running program: {e}")

if __name__ == "__main__":
    main(sys.argv[1])