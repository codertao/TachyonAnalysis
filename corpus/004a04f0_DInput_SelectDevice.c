
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void DInput_SelectDevice(int param_1)

{
  if (param_1 == 0) {
    _DAT_00563fd8 = 0;
    _DAT_00563fdc = 0;
    _DAT_00563fe0 = 0;
    _DAT_00563fe4 = 0;
    _DAT_00563fe8 = 0;
    DAT_00563fec = 0;
    DAT_00563ff0 = 0;
    DAT_00563eac = 0;
    DAT_00563eb0 = 0;
    DAT_00563eb4 = 0;
    DAT_00563eb8 = 0;
    DAT_00563ebc = 0;
    DAT_00563ec0 = 0;
    return;
  }
  DAT_00564000 = param_1;
  _DAT_00563fd8 = 1;
  _DAT_00563fdc = *(undefined4 *)(param_1 + 0x30);
  _DAT_00563fe0 = *(undefined4 *)(param_1 + 0x34);
  _DAT_00563fe4 = *(undefined4 *)(param_1 + 0x38);
  _DAT_00563fe8 = *(undefined4 *)(param_1 + 0x3c);
  DAT_00563eac = *(undefined4 *)(param_1 + 0x18);
  DAT_00563eb0 = *(undefined4 *)(param_1 + 0x1c);
  DAT_00563eb4 = *(undefined4 *)(param_1 + 0x20);
  DAT_00563eb8 = *(undefined4 *)(param_1 + 0x24);
  DAT_00563ebc = *(undefined4 *)(param_1 + 0x28);
  DAT_00563ec0 = *(undefined4 *)(param_1 + 0x2c);
  return;
}

