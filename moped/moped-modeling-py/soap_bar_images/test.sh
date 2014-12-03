for f in *JPG; do
    a="$(echo $f | sed s/JPG/jpg/)"
    mv "$f" "$a"
done
