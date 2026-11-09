
int __cdecl FUN_10001700(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_10019b48 = DAT_10019b48 + 1;
  DAT_10019b50 = 0;
  puVar2 = &DAT_10019b58;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_10001660(0x10019b58);
  DAT_10019b4c = 1;
  while (DAT_10019b50 == 0) {
    Sleep(10);
  }
  *param_1 = DAT_10019bf4;
  return (-(uint)(DAT_10019b54 != 1) & 0xfffffffb) + 5;
}

