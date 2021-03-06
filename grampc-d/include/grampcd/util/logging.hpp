/* This file is part of GRAMPC-D - (https://github.com/grampc-d/grampc-d.git)
 *
 * GRAMPC-D -- A software framework for distributed model predictive control (DMPC)
 * based on the alternating direction method of multipliers (ADMM).
 *
 * Copyright 2020 by Daniel Burk, Andreas Voelz, Knut Graichen
 * All rights reserved.
 *
 * GRAMPC-D is distributed under the BSD-3-Clause license, see LICENSE.txt
 *
 */

#pragma once

#include <iostream>

#include <memory>

namespace grampcd
{
	enum class DebugType
	{
		Error,
		Warning,
		Message,
		Base
	};

	class Logging
	{
	public:
		/*Activate printing messages of type base*/
		void set_print_base(bool print) { set_print_base_ = print; }
		/*Activate printing messages of type message*/
		void set_print_message(bool print) { set_print_message_ = print; }
		/*Activate printing messages of type warning*/
		void set_print_warning(bool print) { set_print_warning_ = print; }
		/*Activate printing messages of type error*/
		void set_print_error(bool print) { set_print_error_ = print; }

		std::ostream& print(const DebugType type) const;

	private:
		bool set_print_base_ = true;
		bool set_print_message_ = false;
		bool set_print_warning_ = false;
		bool set_print_error_ = false;
	};
}