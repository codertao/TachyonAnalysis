
/* per-frame ship physics/update (SHIP class update method) */

uint Ship_Update(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x76) == 1) {
    uVar1 = FUN_00452690(param_1,param_2,param_3);
    return uVar1;
  }
  switch(param_2) {
  case 1:
    FUN_00404fd0(param_1,param_3);
    return 0;
  case 2:
    FUN_00402430(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),param_3,0,
                 *(undefined4 *)(param_1 + 100));
    return 0;
  case 3:
    FUN_00403f70(param_1);
    return 0;
  case 4:
    return (uint)*(byte *)(param_1 + 0xf6);
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0xd8) + 0x24) & 0x80) != 0) {
      return *(uint *)(*(int *)(param_1 + 0x8c) + 0x554);
    }
    break;
  case 6:
    return *(uint *)(*(int *)(param_1 + 0x8c) + 0x558);
  case 7:
    FUN_00405050(param_1,param_1 + 0xdc,param_3);
    return 0;
  case 8:
    FUN_004050e0(param_1,param_3);
    return 0;
  case 10:
    FUN_00405470(param_1,param_3);
    return 0;
  case 0xb:
    FUN_00405580(param_1,param_3);
    return 0;
  case 0xc:
    FUN_004058b0(param_1,param_3);
    return 0;
  case 0xe:
    FUN_00405000(param_1,param_3);
    return 0;
  case 0xf:
    FUN_00405990(param_1,param_1 + 0xdc,param_3);
    return 0;
  case 0x11:
    if ((param_3 & 4) != 0) {
      FUN_00456140(param_1 + 0x10c,4,0x50);
    }
    *(uint *)(param_1 + 0x338) = *(uint *)(param_1 + 0x338) | param_3;
    return 0;
  case 0x12:
    *(uint *)(param_1 + 0x338) = *(uint *)(param_1 + 0x338) & ~param_3;
    return 0;
  case 0x13:
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 0x20;
    FUN_0045eaf0(*(undefined4 *)(param_1 + 0x78),0x13,*(undefined4 *)(param_1 + 100));
    return 0;
  case 0x14:
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xdf;
    FUN_0045eaf0(*(undefined4 *)(param_1 + 0x78),0x14,*(undefined4 *)(param_1 + 100));
    break;
  case 0x18:
    FUN_00403f20(param_1);
    return 0;
  case 0x1a:
    uVar2 = FlightModel_SolveThrottle
                      (*(int *)(param_1 + 0x8c) + 0x84,(float)param_3,param_1 + 0x10c,
                       *(uint *)(*(int *)(param_1 + 0x8c) + 0x564) & 0x400,1);
    *(undefined4 *)(param_1 + 0x108) = uVar2;
    return 0;
  case 0x1b:
    if (param_3 == 0xffffffff) {
      *(undefined1 *)(param_1 + 0xc1) = 0xff;
      *(undefined2 *)(param_1 + 0x312) = 0x400;
      *(undefined1 *)(param_1 + 0x327) = 1;
      return 0;
    }
    if ((int)param_3 < 0) {
      param_3 = 0;
    }
    else if (0xff < (int)param_3) {
      param_3 = 0xff;
    }
    *(short *)(param_1 + 0x312) = (short)(param_3 << 2);
    *(char *)(param_1 + 0xc1) = (char)((int)(param_3 << 2) >> 3);
    *(undefined1 *)(param_1 + 0x327) = 0;
    return 0;
  }
  return 0;
}

