class Directory:
    def __init__(self):
        self.dirs: Dict[str, Directory] = dict()
        self.files: Dict[str, File] = dict()

    def ls(self):
        return sorted(
            list(self.dirs.keys()) +
            list(self.files.keys())
        )

class File:
    def __init__(self):
        self.content = ''

class FileSystem:
    @classmethod
    def split_path(cls, path: str) -> List[str]:
        return list(filter(lambda fragment: fragment != '', path.split('/')))

    def __init__(self):
        self.root = Directory()
        

    def ls(self, path: str) -> List[str]:
        current_dir = self.root
        path_fragments = FileSystem.split_path(path)
        for i, fragment in enumerate(path_fragments):
            if i == len(path_fragments)-1:
                if fragment in current_dir.files:
                    return [fragment]
            current_dir = current_dir.dirs[fragment]
        return current_dir.ls()

    def mkdir(self, path: str) -> None:
        current_dir = self.root
        path_fragments = FileSystem.split_path(path)
        for fragment in path_fragments:
            if fragment not in current_dir.dirs:
                current_dir.dirs[fragment] = Directory()
            current_dir = current_dir.dirs[fragment]

    def addContentToFile(self, filePath: str, content: str) -> None:
        current_dir = self.root
        path_fragments = FileSystem.split_path(filePath)
        for fragment in path_fragments[:-1]:
            current_dir = current_dir.dirs[fragment]
        if path_fragments[-1] not in current_dir.files:
            current_dir.files[path_fragments[-1]] = File()
        file = current_dir.files[path_fragments[-1]]
        file.content += content

    def readContentFromFile(self, filePath: str) -> str:
        current_dir = self.root
        path_fragments = FileSystem.split_path(filePath)
        for fragment in path_fragments[:-1]:
            current_dir = current_dir.dirs[fragment]
        file = current_dir.files[path_fragments[-1]]
        return file.content


# Your FileSystem object will be instantiated and called as such:
# obj = FileSystem()
# param_1 = obj.ls(path)
# obj.mkdir(path)
# obj.addContentToFile(filePath,content)
# param_4 = obj.readContentFromFile(filePath)