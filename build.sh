# clone ethereum-plugin-sdk first
# FOR NANO S
# docker run -it --rm -v $PWD:/app ghcr.io/ledgerhq/ledger-app-builder/ledger-app-builder:sha-229b03c bash -c "cd /app && make clean && make CHAIN=polygon"
docker run -it --rm -v $PWD:/app ghcr.io/ledgerhq/ledger-app-builder/ledger-app-builder:sha-229b03c bash -c "cd /app && make clean && make"