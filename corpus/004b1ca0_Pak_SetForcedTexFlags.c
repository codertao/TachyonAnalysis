
/* refine: 0x668f60 OR'd into every material's texture flags at load/bind */

void Pak_SetForcedTexFlags(undefined4 param_1)

{
  DAT_00668f60 = param_1;
  return;
}

