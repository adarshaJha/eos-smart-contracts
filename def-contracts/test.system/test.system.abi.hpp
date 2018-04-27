const char* const test_system_abi = R"=====(
{
  "types": [],
  "structs": [{
      "name": "set_account_limits",
      "base": "",
      "fields": [
        {"name":"account",    "type":"account_name"},
        {"name":"ram_bytes",  "type":"int64"},
        {"name":"net_weight", "type":"int64"},
        {"name":"cpu_weight", "type":"int64"}
      ]
    },{
      "name": "set_global_limits",
      "base": "",
      "fields": [
        {"name":"cpu_usec_per_period",    "type":"int64"},
      ]
    },{
      "name": "producer_key",
      "base": "",
      "fields": [
        {"name":"producer_name",      "type":"account_name"},
        {"name":"signing_key",  "type":"public_key"}
      ]
    },{
      "name": "set_producers",
      "base": "",
      "fields": [
        {"name":"version",    "type":"uint32"},
        {"name":"producers",   "type":"producer_key[]"}
      ]
    },{
      "name": "require_auth",
      "base": "",
      "fields": [
        {"name":"from", "type":"account_name"},
      ]
    },{
      "name": "nonce",
      "base": "",
      "fields": [
        {"name":"value", "type":"string"}
      ]
    }],
  "actions": [{
      "name": "setalimits",
      "type": "set_account_limits"
    },{
      "name": "setglimits",
      "type": "set_global_limits"
    },{
      "name": "setprods",
      "type": "set_producers"
    },{
      "name": "reqauth",
      "type": "require_auth"
    },{
      "name": "nonce",
      "type": "nonce"
    }
  ],
  "tables": []
})=====";