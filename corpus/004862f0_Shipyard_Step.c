
/* sweep */

void Shipyard_Step(undefined4 param_1)

{
  DAT_0056e3a4 = Shipyard_StepIndex(param_1);
  DAT_0056e3a8 = &DAT_00587a64 + DAT_0056e3a4 * 0x6d;
  Shipyard_OnShipChanged();
  return;
}

