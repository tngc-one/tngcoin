Shared Libraries
================

## tngcconsensus

The purpose of this library is to make the verification functionality that is critical to TNGC's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `tngcconsensus.h` located in `src/script/tngcconsensus.h`.

#### Version

`tngcconsensus_version` returns an `unsigned int` with the API version *(currently `1`)*.

#### Script Validation

`tngcconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `tngcconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `tngcconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `tngcconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/tngc/bips/blob/master/bip-0016.mediawiki)) subscripts
- `tngcconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/tngc/bips/blob/master/bip-0066.mediawiki)) compliance
- `tngcconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY` - Enforce NULLDUMMY ([BIP147](https://github.com/tngc/bips/blob/master/bip-0147.mediawiki))
- `tngcconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY` - Enable CHECKLOCKTIMEVERIFY ([BIP65](https://github.com/tngc/bips/blob/master/bip-0065.mediawiki))
- `tngcconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY` - Enable CHECKSEQUENCEVERIFY ([BIP112](https://github.com/tngc/bips/blob/master/bip-0112.mediawiki))
- `tngcconsensus_SCRIPT_FLAGS_VERIFY_WITNESS` - Enable WITNESS ([BIP141](https://github.com/tngc/bips/blob/master/bip-0141.mediawiki))

##### Errors
- `tngcconsensus_ERR_OK` - No errors with input parameters *(see the return value of `tngcconsensus_verify_script` for the verification status)*
- `tngcconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `tngcconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `tngcconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`
- `tngcconsensus_ERR_AMOUNT_REQUIRED` - Input amount is required if WITNESS is used

### Example Implementations
- [NTNGC](https://github.com/NicolasDorier/NTNGC/blob/master/NTNGC/Script.cs#L814) (.NET Bindings)
- [node-libtngcconsensus](https://github.com/bitpay/node-libtngcconsensus) (Node.js Bindings)
- [java-libtngcconsensus](https://github.com/dexX7/java-libtngcconsensus) (Java Bindings)
- [tngcconsensus-php](https://github.com/Bit-Wasp/tngcconsensus-php) (PHP Bindings)
