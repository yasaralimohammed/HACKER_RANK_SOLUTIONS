# Functions in C

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

## Problem

https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true

---

<div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p><strong>Objective</strong></p>

<p>In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something. <br>
<br>
A sample syntax for a function is</p>

<div class="highlight"><pre><span></span>	<span class="n">return_type</span> <span class="nf">function_name</span><span class="p">(</span><span class="n">arg_type_1</span> <span class="n">arg_1</span><span class="p">,</span> <span class="n">arg_type_2</span> <span class="n">arg_2</span><span class="p">,</span> <span class="p">...)</span> <span class="p">{</span>
    	<span class="p">...</span>
        <span class="p">...</span>
        <span class="p">...</span>
        <span class="p">[</span><span class="k">if</span> <span class="n">return_type</span> <span class="n">is</span> <span class="n">non</span> <span class="kt">void</span><span class="p">]</span>
        	<span class="k">return</span> <span class="n">something</span> <span class="n">of</span> <span class="n">type</span> <span class="err">`</span><span class="n">return_type</span><span class="err">`</span><span class="p">;</span>
    <span class="p">}</span>
</pre></div>


<p>For example, a function to read four variables and return the sum of them can be written as</p>

<div class="highlight"><pre><span></span>	<span class="kt">int</span> <span class="nf">sum_of_four</span><span class="p">(</span><span class="kt">int</span> <span class="n">a</span><span class="p">,</span> <span class="kt">int</span> <span class="n">b</span><span class="p">,</span> <span class="kt">int</span> <span class="n">c</span><span class="p">,</span> <span class="kt">int</span> <span class="n">d</span><span class="p">)</span> <span class="p">{</span>
    	<span class="kt">int</span> <span class="n">sum</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
        <span class="n">sum</span> <span class="o">+=</span> <span class="n">a</span><span class="p">;</span>
        <span class="n">sum</span> <span class="o">+=</span> <span class="n">b</span><span class="p">;</span>
        <span class="n">sum</span> <span class="o">+=</span> <span class="n">c</span><span class="p">;</span>
        <span class="n">sum</span> <span class="o">+=</span> <span class="n">d</span><span class="p">;</span>
        <span class="k">return</span> <span class="n">sum</span><span class="p">;</span>
    <span class="p">}</span>
</pre></div>


<div class="highlight"><pre><span></span><span class="o">+=</span> <span class="o">:</span> <span class="n">Add</span> <span class="n">and</span> <span class="n">assignment</span> <span class="n">operator</span><span class="p">.</span> <span class="n">It</span> <span class="n">adds</span> <span class="n">the</span> <span class="n">right</span> <span class="n">operand</span> <span class="n">to</span> <span class="n">the</span> <span class="n">left</span> <span class="n">operand</span> <span class="n">and</span> <span class="n">assigns</span> <span class="n">the</span> <span class="n">result</span> <span class="n">to</span> <span class="n">the</span> <span class="n">left</span> <span class="n">operand</span><span class="p">.</span>

<span class="n">a</span> <span class="o">+=</span> <span class="n">b</span> <span class="n">is</span> <span class="n">equivalent</span> <span class="n">to</span> <span class="n">a</span> <span class="o">=</span> <span class="n">a</span> <span class="o">+</span> <span class="n">b</span><span class="p">;</span>
</pre></div>


<p><strong>Task</strong></p>

<p>Write a function <code>int max_of_four(int a, int b, int c, int d)</code> which reads four arguments and returns the greatest of them. </p>

<p><strong>Note</strong>  </p>

<p>There is not built in <code>max</code> function in C.  Code that will be reused is often put in a separate function, e.g. <code>int max(x, y)</code> that returns the greater of the two values.  </p></div></div></div><div class="challenge_input_format"><div class="msB challenge_input_format_title"><p><strong>Input Format</strong></p></div><div class="msB challenge_input_format_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>Input will contain four integers - <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="7.552ex" height="2.509ex" style="vertical-align: -0.671ex;" viewBox="0 -791.3 3251.5 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(529,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(974,0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g><g transform="translate(1404,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(1849,0)"><path stroke-width="1" d="M34 159Q34 268 120 355T306 442Q362 442 394 418T427 355Q427 326 408 306T360 285Q341 285 330 295T319 325T330 359T352 380T366 386H367Q367 388 361 392T340 400T306 404Q276 404 249 390Q228 381 206 359Q162 315 142 235T121 119Q121 73 147 50Q169 26 205 26H209Q321 26 394 111Q403 121 406 121Q410 121 419 112T429 98T420 83T391 55T346 25T282 0T202 -11Q127 -11 81 37T34 159Z"></path></g><g transform="translate(2282,0)"><path stroke-width="1" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path></g><g transform="translate(2727,0)"><path stroke-width="1" d="M366 683Q367 683 438 688T511 694Q523 694 523 686Q523 679 450 384T375 83T374 68Q374 26 402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487H491Q506 153 506 145Q506 140 503 129Q490 79 473 48T445 8T417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157Q33 205 53 255T101 341Q148 398 195 420T280 442Q336 442 364 400Q369 394 369 396Q370 400 396 505T424 616Q424 629 417 632T378 637H357Q351 643 351 645T353 664Q358 683 366 683ZM352 326Q329 405 277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q233 26 290 98L298 109L352 326Z"></path></g></g></svg></span> , one on each line.</p></div></div></div><div class="challenge_output_format"><div class="msB challenge_output_format_title"><p><strong>Output Format</strong></p></div><div class="msB challenge_output_format_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>Print the greatest of the four integers.
<br>
Note: I/O will be automatically handled.</p></div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>3
4
6
5
</code></pre></div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>6
</code></pre></div></div></div>
