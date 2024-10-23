import os

def read_station_file(file_path):
    if os.path.exists(file_path):
        with open(file_path, 'r') as f:
            # Read and process the file contents
            content = f.read()
            # ...
    else:
        print("Station file not found:", file_path)

# Replace 'path/to/station_file' with the actual file path
read_station_file('path/to/station_file')