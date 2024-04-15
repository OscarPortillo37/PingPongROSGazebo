
"use strict";

let IONodeConfiguration = require('./IONodeConfiguration.js');
let CameraControl = require('./CameraControl.js');
let InteractionControlState = require('./InteractionControlState.js');
let IOComponentCommand = require('./IOComponentCommand.js');
let CollisionDetectionState = require('./CollisionDetectionState.js');
let AnalogIOState = require('./AnalogIOState.js');
let IOComponentConfiguration = require('./IOComponentConfiguration.js');
let RobotAssemblyState = require('./RobotAssemblyState.js');
let DigitalIOState = require('./DigitalIOState.js');
let IOComponentStatus = require('./IOComponentStatus.js');
let DigitalIOStates = require('./DigitalIOStates.js');
let EndpointState = require('./EndpointState.js');
let EndpointStates = require('./EndpointStates.js');
let CameraSettings = require('./CameraSettings.js');
let URDFConfiguration = require('./URDFConfiguration.js');
let HeadState = require('./HeadState.js');
let NavigatorState = require('./NavigatorState.js');
let DigitalOutputCommand = require('./DigitalOutputCommand.js');
let JointLimits = require('./JointLimits.js');
let AnalogIOStates = require('./AnalogIOStates.js');
let IODataStatus = require('./IODataStatus.js');
let HomingCommand = require('./HomingCommand.js');
let NavigatorStates = require('./NavigatorStates.js');
let IODeviceConfiguration = require('./IODeviceConfiguration.js');
let EndpointNamesArray = require('./EndpointNamesArray.js');
let IONodeStatus = require('./IONodeStatus.js');
let InteractionControlCommand = require('./InteractionControlCommand.js');
let IOStatus = require('./IOStatus.js');
let SEAJointState = require('./SEAJointState.js');
let IODeviceStatus = require('./IODeviceStatus.js');
let CollisionAvoidanceState = require('./CollisionAvoidanceState.js');
let HomingState = require('./HomingState.js');
let AnalogOutputCommand = require('./AnalogOutputCommand.js');
let HeadPanCommand = require('./HeadPanCommand.js');
let JointCommand = require('./JointCommand.js');
let CalibrationCommandGoal = require('./CalibrationCommandGoal.js');
let CalibrationCommandActionResult = require('./CalibrationCommandActionResult.js');
let CalibrationCommandActionFeedback = require('./CalibrationCommandActionFeedback.js');
let CalibrationCommandAction = require('./CalibrationCommandAction.js');
let CalibrationCommandActionGoal = require('./CalibrationCommandActionGoal.js');
let CalibrationCommandResult = require('./CalibrationCommandResult.js');
let CalibrationCommandFeedback = require('./CalibrationCommandFeedback.js');

module.exports = {
  IONodeConfiguration: IONodeConfiguration,
  CameraControl: CameraControl,
  InteractionControlState: InteractionControlState,
  IOComponentCommand: IOComponentCommand,
  CollisionDetectionState: CollisionDetectionState,
  AnalogIOState: AnalogIOState,
  IOComponentConfiguration: IOComponentConfiguration,
  RobotAssemblyState: RobotAssemblyState,
  DigitalIOState: DigitalIOState,
  IOComponentStatus: IOComponentStatus,
  DigitalIOStates: DigitalIOStates,
  EndpointState: EndpointState,
  EndpointStates: EndpointStates,
  CameraSettings: CameraSettings,
  URDFConfiguration: URDFConfiguration,
  HeadState: HeadState,
  NavigatorState: NavigatorState,
  DigitalOutputCommand: DigitalOutputCommand,
  JointLimits: JointLimits,
  AnalogIOStates: AnalogIOStates,
  IODataStatus: IODataStatus,
  HomingCommand: HomingCommand,
  NavigatorStates: NavigatorStates,
  IODeviceConfiguration: IODeviceConfiguration,
  EndpointNamesArray: EndpointNamesArray,
  IONodeStatus: IONodeStatus,
  InteractionControlCommand: InteractionControlCommand,
  IOStatus: IOStatus,
  SEAJointState: SEAJointState,
  IODeviceStatus: IODeviceStatus,
  CollisionAvoidanceState: CollisionAvoidanceState,
  HomingState: HomingState,
  AnalogOutputCommand: AnalogOutputCommand,
  HeadPanCommand: HeadPanCommand,
  JointCommand: JointCommand,
  CalibrationCommandGoal: CalibrationCommandGoal,
  CalibrationCommandActionResult: CalibrationCommandActionResult,
  CalibrationCommandActionFeedback: CalibrationCommandActionFeedback,
  CalibrationCommandAction: CalibrationCommandAction,
  CalibrationCommandActionGoal: CalibrationCommandActionGoal,
  CalibrationCommandResult: CalibrationCommandResult,
  CalibrationCommandFeedback: CalibrationCommandFeedback,
};
