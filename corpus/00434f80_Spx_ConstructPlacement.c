
/* dispatch class method +0x2c (= Sped_ConstructEntity) with the placement def record -> build live
   entity at def pos+0x08/0c/10 and orientation+0x14/18/1c (euler angles, NOT velocity) */

void Spx_ConstructPlacement(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    if (*(code **)(param_2 + 0x2c) != (code *)0x0) {
      (**(code **)(param_2 + 0x2c))(param_1,param_2,param_3);
    }
    DAT_005a5540 = DAT_005a5540 + 1;
  }
  return;
}

