find . -name "*.sh" -type f -exec basename {} \; | cut -d . -f 1
