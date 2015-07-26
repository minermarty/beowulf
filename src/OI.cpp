// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/ArmOff.h"
#include "Commands/ArmOn.h"
#include "Commands/ArmReverse.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ConveyorOff.h"
#include "Commands/ConveyorOn.h"
#include "Commands/IntakeOff.h"
#include "Commands/IntakeOn.h"
#include "Commands/ShooterMaintain.h"
#include "Commands/ShooterOff.h"
#include "Commands/ShooterOn.h"
#include "Commands/ShooterToggle.h"
#include "Commands/SpoilerToggle.h"
#include "Commands/TankDrive.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	driver = new Joystick(0);
	
	dButtonRBOff = new JoystickButton(driver, 6);
	dButtonRBOff->WhenReleased(new ArmOff());
	dButtonLBOff = new JoystickButton(driver, 5);
	dButtonLBOff->WhenReleased(new ArmOff());
	dButtonRB = new JoystickButton(driver, 6);
	dButtonRB->WhileHeld(new ArmReverse());
	dButtonLB = new JoystickButton(driver, 5);
	dButtonLB->WhileHeld(new ArmOn());
	dButtonX = new JoystickButton(driver, 3);
	dButtonX->WhenReleased(new ShooterToggle());
	dButtonB = new JoystickButton(driver, 2);
	dButtonB->WhileHeld(new ConveyorOn());
	dButtonA = new JoystickButton(driver, 1);
	dButtonA->WhileHeld(new IntakeOn());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("IntakeOn", new IntakeOn());

	SmartDashboard::PutData("IntakeOff", new IntakeOff());

	SmartDashboard::PutData("ConveyorOn", new ConveyorOn());

	SmartDashboard::PutData("ConveyorOff", new ConveyorOff());

	SmartDashboard::PutData("ShooterOn", new ShooterOn());

	SmartDashboard::PutData("ShooterOff", new ShooterOff());

	SmartDashboard::PutData("ArmOn", new ArmOn());

	SmartDashboard::PutData("ArmOff", new ArmOff());

	SmartDashboard::PutData("ArmReverse", new ArmReverse());

	SmartDashboard::PutData("ShooterToggle", new ShooterToggle());

	SmartDashboard::PutData("ShooterMaintain", new ShooterMaintain());

	SmartDashboard::PutData("TankDrive", new TankDrive());

	SmartDashboard::PutData("SpoilerToggle", new SpoilerToggle());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getDriver() {
	return driver;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
