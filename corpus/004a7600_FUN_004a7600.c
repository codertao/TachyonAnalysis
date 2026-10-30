
void FUN_004a7600(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  DAT_00601e74 = param_1;
  DAT_00601e78 = (undefined4 *)FUN_0049c7d0(param_1 << 4,s_MS_MIXER_CHANNELS_0055e548);
  puVar4 = DAT_00601e78;
  for (iVar3 = (param_1 & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; puVar1 = DAT_00601e78, iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    uVar2 = _AIL_allocate_sample_handle_4(DAT_00601e70);
    *puVar1 = uVar2;
    puVar1[1] = 0xff;
    puVar1 = puVar1 + 4;
  }
  return;
}

