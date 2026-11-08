
void FUN_004238c0(vec3 *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_004230f0(param_1,0x10000,7);
  FUN_00422120(param_1,5);
  uVar1 = distance_between(param_1,(vec3 *)&DAT_005b9600);
  if (uVar1 < 0x800000) {
    FUN_00423790(&PTR_DAT_00535a1c,param_1,&local_c,0x19,0x32,2,0x10000,0x50000,0xc,0,0x19);
  }
  if ((param_4 & 1) != 0) {
    FUN_00421b10(param_1,DAT_005a7508,param_3);
    uVar2 = 0xb;
  }
  FUN_00466740(8,4,uVar2,param_1,0x10000);
  return;
}

