
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* walk entity list: sphere test then mesh */

int Coll_SegmentVsList(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_005b3194 = *param_2 - *param_3;
  _DAT_005b3198 = param_2[1] - param_3[1];
  _DAT_005b319c = param_2[2] - param_3[2];
  DAT_005b31a0 = call_approx_vec_length(&DAT_005b3194);
  call_Vec_Normalize((vec3 *)&DAT_005b3194);
  do {
    if (param_1 == 0) {
      return 0;
    }
    if ((param_1 != DAT_005b2d80) && (param_1 != DAT_005b2d84)) {
      if (DAT_005b2d88 == 0) {
        iVar2 = *(int *)(param_1 + 0xb8);
      }
      else {
        iVar2 = DAT_005b2d88;
        if (*(int *)(param_1 + 0xb8) == 0) {
          iVar2 = 0x10000;
        }
      }
      iVar1 = Coll_SegmentVsSphere(param_3,param_2,param_1,iVar2,&DAT_005b3194,DAT_005b31a0);
      if (iVar1 != 0) {
        iVar2 = Coll_SegmentVsModel(param_3,param_2,param_1 + 0x18,param_4,iVar2,
                                    *(undefined4 *)(param_1 + 0xc4));
        if ((iVar2 != 0) &&
           ((Model_LocalToWorld(param_1 + 0x18,param_4), DAT_005b3190 == (code *)0x0 ||
            (iVar2 = (*DAT_005b3190)(DAT_005b2d80,param_1), iVar2 != 0)))) {
          return param_1;
        }
      }
    }
    param_1 = *(int *)(param_1 + 0x9c);
  } while( true );
}

