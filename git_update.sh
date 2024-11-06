#!/bin/bash

# Set the repository directory
REPO_DIR="/sphenix/u/plewis3323/Master_w"

# Navigate to the repository
cd "$REPO_DIR" || { echo "Repository not found"; exit 1; }

# Stage all changes
git add -A

# Commit changes with a generic message (customize as needed)
git commit -m "Automated update: Reflect changes in directory structure"

# Push changes to the remote repository
git push origin main

# Confirmation message
echo "Repository updated successfully!"





