find . -name "*.sh" | xargs basename | sed 's/\(.*\).sh/\1/'| tr "." "\0"
