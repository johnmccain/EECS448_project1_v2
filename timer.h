class timer
{
	public:
		/** @pre  None
		*   @post Timer defaulted to current Central time
		*/
		timer();

		/** @pre  hours, minutes, seconds are assumed to be valid numbers for hours, minutes, seconds
		*   @post m_hours, m_minutes, m_seconds are set to user defined inputs
		*/
		timer(int hours, int minutes, int seconds);

		~timer();

		/** @pre  None
		*   @post Variables for time are updated
		*/
		void timing();

		//--------------------------------------
		//Get methods for hours, minutes, seconds
		//--------------------------------------

		/** @pre    None
		*   @return Returns number of hours
		*/
		int getHours();

		/** @pre    None
		*   @return Returns number of minutes
		*/
		int getMinutes();

		/** @pre    None
		*   @return Returns number of seconds
		*/
		int getSeconds();

		//--------------------------------------
		//Set methods for hours, minutes, seconds
		//--------------------------------------

		/** @pre  hours is assumed to be a valid integer representation for an "hour"
		*   @post Sets hours to integer passed in
		*/
		void setHours(int hours);

		/** @pre  minutes is assumed to be a valid integer representation for a "minute"
		*   @post Sets hours to integer passed in
		*/
		void setMinutes(int minutes);

		/** @pre  seconds is assumed to be a valid integer representation for a "second"
		*   @post Sets hours to integer passed in
		*/
		void setSeconds(int seconds);

		//Member variables

	private:
		int m_seconds_1970;
		int m_hours;
		int m_minutes;
		int m_seconds;
};