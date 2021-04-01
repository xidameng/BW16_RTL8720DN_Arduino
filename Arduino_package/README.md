# Command to create new release

1.  Create package

```Bash
tar -czvf ameba_d-1.0.0.tar.gz hardware
```

2. Calculate Checksum for index.json

```bash
sha256sum ameba_d-1.0.0.tar.gz
```

3. Check properties to get size