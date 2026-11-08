
void FUN_0041f5e0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_80 [128];
  
  copy_p2_to_p1_and_get_basename_(local_80,param_1);
  iVar1 = check_is_snd_playing_maybe(local_80);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x58) & 1) != 0)) {
    *(undefined4 *)(iVar1 + 0x6c) = 0;
  }
  return;
}

