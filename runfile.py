#pylint: disable=all
import os,sys

def main():
    os.system("g++ npda.cpp -o npda.exe && npda.exe < in.txt")
    if(os.path.exists("npda.exe")):
        os.remove("npda.exe")


def git():
    os.system("git status")
    os.system("git add -A")
    os.system("git commit -m 'update'")
    os.system("git push origin main")
    os.system("git status")

if __name__ == "__main__":
    args = args = sys.argv[1:]

    if(args):
        if(args[0] == "git"):
            git()
        elif(args[0] == "run"):
            main()