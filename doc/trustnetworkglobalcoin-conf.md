# `trustnetworkglobalcoin.conf` Configuration File

The configuration file is used by `trustnetworkglobalcoind`, `trustnetworkglobalcoin-qt` and `trustnetworkglobalcoin-cli`.

All command-line options (except for `-?`, `-help`, `-version` and `-conf`) may be specified in a configuration file, and all configuration file options (except for `includeconf`) may also be specified on the command line. Command-line options override values set in the configuration file and configuration file options override values set in the GUI.

## Configuration File Format

The configuration file is a plain text file and consists of `option=value` entries, one per line. Leading and trailing whitespaces are removed.

In contrast to the command-line usage:
- an option must be specified without leading `-`;
- a value of the given option is mandatory; e.g., `testnet=1` (for chain selection options), `noconnect=1` (for negated options).

### Blank lines

Blank lines are allowed and ignored by the parser.

### Comments

A comment starts with a number sign (`#`) and extends to the end of the line. All comments are ignored by the parser.

Comments may appear in two ways:
- on their own on an otherwise empty line (_preferable_);
- after an `option=value` entry.

### Network specific options

Network specific options can be:
- placed into sections with headers `[main]` (not `[mainnet]`), `[test]` (not `[testnet]`), `[signet]` or `[regtest]`;
- prefixed with a chain name; e.g., `regtest.maxmempool=100`.

Network specific options take precedence over non-network specific options.
If multiple values for the same option are found with the same precedence, the
first one is generally chosen.

This means that given the following configuration, `regtest.rpcport` is set to `3000`:

```
regtest=1
rpcport=2000
regtest.rpcport=3000

[regtest]
rpcport=4000
```

## Configuration File Path

The configuration file is not automatically created; you can create it using your favorite text editor. By default, the configuration file name is `trustnetworkglobalcoin.conf` and it is located in the TrustNetworkGlobalCoin data directory, but both the TrustNetworkGlobalCoin data directory and the configuration file path may be changed using the `-datadir` and `-conf` command-line options.

The `includeconf=<file>` option in the `trustnetworkglobalcoin.conf` file can be used to include additional configuration files.

### Default configuration file locations

Operating System | Data Directory | Example Path
-- | -- | --
Windows | `%APPDATA%\TrustNetworkGlobalCoin\` | `C:\Users\username\AppData\Roaming\TrustNetworkGlobalCoin\trustnetworkglobalcoin.conf`
Linux | `$HOME/.trustnetworkglobalcoin/` | `/home/username/.trustnetworkglobalcoin/trustnetworkglobalcoin.conf`
macOS | `$HOME/Library/Application Support/TrustNetworkGlobalCoin/` | `/Users/username/Library/Application Support/TrustNetworkGlobalCoin/trustnetworkglobalcoin.conf`

You can find an example trustnetworkglobalcoin.conf file in [share/examples/trustnetworkglobalcoin.conf](../share/examples/trustnetworkglobalcoin.conf).
