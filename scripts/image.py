import os

# Resolve folder containing the PNG files relative to this script
script_dir = os.path.dirname(os.path.abspath(__file__))
folder_path = os.path.normpath(os.path.join(script_dir, '..', 'images'))

# Get all PNG files in the folder and its subfolders
png_files = []
for root, _, files in os.walk(folder_path):
    for file in files:
        if file.endswith('.png'):
            rel_dir = os.path.relpath(root, folder_path)
            rel_path = os.path.join(rel_dir, file) if rel_dir != '.' else file
            png_files.append(rel_path)

# Generate XML lines
for file in png_files:
    # Remove 'image_' prefix and '.png' suffix for the name
    name = file
    if name.startswith('image_'):
        name = name[len('image_'):]
    name = name.replace('.png', '').replace('flags/', '')
    
    # Prepare the src_path
    src_path = os.path.join('images', file).replace('\\', '/')

    # Print the XML line
    # print(f'<data name="{name}" src_path="{src_path}"  color_format="rgb565a8"/>')

    print(f'else if(lv_streq("{name}", code)) {{ return {name}; }}')
