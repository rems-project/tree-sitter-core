#!/bin/bash

ok_count=0
error_count=0

for file in tests/*.core; do
    echo -n "Parsing $file "
    if tree-sitter parse "$file" 2>/dev/null | grep -q 'ERROR'; then
        echo "ERROR"
        ((error_count++))
    else
        echo "OK"
        ((ok_count++))
    fi
done

echo ""
echo "Tests Passed: $ok_count"
echo "Total Failed: $error_count"

