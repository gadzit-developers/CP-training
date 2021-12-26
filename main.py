import os


def creat_dir(origin, elements):
    for element in elements:
        os.mkdir(f"{origin}/{element}")


user = [
    "Mehdi Hayani Mechkouri",
    "Firdawsi Amine",
    "Aabibi Youness",
    "Aboulouafa Baha-eddine",
    "Amine Nouabi",
    "Bachar Mohamed",
    "El firqi Jalaleddin",
    "Jaouad Zerhouni",
    "Yahiaoui Akram",
    "Youssef Charmaqe",
]

platforms = ["Arena", "LeetCode"]

folder = ["Users", "Platforms"]


creat_dir(".", folder)
creat_dir(folder[0], user)
creat_dir(folder[1], platforms)
