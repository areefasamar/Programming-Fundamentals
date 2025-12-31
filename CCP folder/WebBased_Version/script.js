// Elements
const startBtn = document.getElementById("start-btn");
const subjectBtns = document.getElementsByClassName("subject-btn");
const playAgainBtn = document.getElementById("play-again-btn");
const leaderboardBtn = document.getElementById("view-leaderboard-btn");
const leaderboardBtn2 = document.getElementById("view-leaderboard-btn-2");
const hintBtn = document.getElementById("hint-btn");

// Variables
let currentSubject = "";
let currentQuestionIndex = 0;
let score = 0;
let hintsUsed = 0;
const MAX_HINTS = 3;
let quizStartTime = 0;

// Screens
function showScreen(screenId) {
    document.querySelectorAll(".screen").forEach(s => s.classList.add("hidden"));
    document.getElementById(screenId).classList.remove("hidden");
}

// Start Quiz
startBtn.addEventListener("click", () => {
    const username = document.getElementById("username").value.trim();
    if (!username) { alert("Please enter your name!"); return; }
    document.getElementById("user-name-display").innerText = username;
    showScreen("subject-screen");
});

// Subject Selection
for (let btn of subjectBtns) {
    btn.addEventListener("click", () => {
        currentSubject = btn.dataset.subject;
        currentQuestionIndex = 0;
        score = 0;
        hintsUsed = 0;
        quizStartTime = Date.now();
        showScreen("quiz-screen");
        showQuestion();
    });
}

// Play Again
playAgainBtn.addEventListener("click", () => {
    showScreen("welcome-screen");
    document.getElementById("username").value = "";
});

// Leaderboard
leaderboardBtn.addEventListener("click", showLeaderboardScreen);
leaderboardBtn2.addEventListener("click", showLeaderboardScreen);

function backToWelcome() { showScreen("welcome-screen"); }
function exitQuiz() { window.close(); }

// ---------------- Questions ----------------
const questions = {
    "ENGLISH": [
        { question: "Which word best fits the blank: Her speech was so _______ that even the skeptics were convinced.", options: ["prolix","vapid","cogent","abstruse"], answer: 2, hint: "It means clear, logical, and persuasive." },
        { question: "Identify the figure of speech: “I must be cruel only to be kind.” — Hamlet", options: ["Paradox","Irony","Metaphor","Oxymoron"], answer: 0, hint: "A statement that seems contradictory but expresses truth." },
        { question: "The word “ephemeral” most nearly means:", options: ["Everlasting","Momentary","Dull","Permanent"], answer: 1, hint: "Something that lasts only a short time." },
        { question: "Which of the following sentences contains a dangling modifier?", options: ["After reading the original study, the article remained unconvincing.","After reading the original study, I found the article unconvincing.","The article was unconvincing after I read the study.","I found the article unconvincing after reading the study."], answer: 1, hint: "The subject doing the action is missing." },
        { question: "In poetry, enjambment refers to:", options: ["The repetition of consonant sounds","A pause at the end of a line","The continuation of a sentence beyond a line break","A deliberate rhyme scheme"], answer: 2, hint: "When a poetic line flows into the next without pause." },
        { question: "The word “pedantic” describes a person who:", options: ["Is excessively concerned with minor details","Avoids intellectual discussions","Is unpredictable and moody","Is generous with praise"], answer: 0, hint: "Someone who corrects your grammar in casual talk." },
        { question: "Which of these sentences uses the subjunctive mood correctly?", options: ["If I was you, I’d take the offer.","If I were you, I’d take the offer.","If I am you, I’d take the offer.","If I will be you, I’d take the offer."], answer: 1, hint: "Subjunctive mood is for imaginary or unreal situations." },
        { question: "In literary theory, intertextuality means:", options: ["Comparing authors from the same era","The relationship between different texts","The author’s personal influence on writing","The text’s relation to historical context"], answer: 1, hint: "When one text echoes or references another." },
        { question: "Which pair of words are closest in meaning?", options: ["Loquacious – Reticent","Taciturn – Talkative","Verbose – Garrulous","Laconic – Wordy"], answer: 2, hint: "Both mean talkative or using too many words." },
        { question: "The expression “Time is a thief” is an example of:", options: ["Metaphor","Simile","Irony","Metonymy"], answer: 0, hint: "It’s a direct comparison without 'like' or 'as'." }
    ],

    "GEOGRAPHY": [
        { question: "The Ring of Fire is located around which ocean?", options: ["Atlantic Ocean","Indian Ocean","Pacific Ocean","Arctic Ocean"], answer: 2, hint: "It’s the world’s most earthquake-prone region, shaped like a giant horseshoe." },
        { question: "Which layer of the Earth is responsible for tectonic plate movement?", options: ["Crust","Mantle","Outer Core","Inner Core"], answer: 1, hint: "Think of the semi-molten layer where convection currents occur." },
        { question: "What is the longest mountain range in the world?", options: ["Himalayas","Andes","Rockies","Alps"], answer: 1, hint: "It stretches along the western edge of South America." },
        { question: "Which river is the primary source of the Amazon River system?", options: ["Madeira","Negro","Ucayali","Tapajós"], answer: 2, hint: "It begins in Peru and merges with the Marañón." },
        { question: "The Great Barrier Reef is located off the coast of which Australian state?", options: ["Western Australia","New South Wales","Queensland","Victoria"], answer: 2, hint: "It lies along Australia’s northeastern coast." },
        { question: "Which of the following countries does the Tropic of Cancer pass through?", options: ["Egypt","Australia","Pakistan","Argentina"], answer: 2, hint: "It crosses the southern parts of Balochistan." },
        { question: "Which desert is known as the coldest desert in the world?", options: ["Gobi Desert","Atacama Desert","Sahara Desert","Kalahari Desert"], answer: 0, hint: "It’s found in northern China and southern Mongolia." },
        { question: "Which country has the most time zones in the world?", options: ["Russia","France","United States","China"], answer: 1, hint: "Its overseas territories are scattered across the globe." },
        { question: "The Coriolis Effect causes winds in the Northern Hemisphere to:", options: ["Blow straight north","Deflect to the left","Deflect to the right","Reverse direction"], answer: 2, hint: "It’s caused by the Earth’s rotation." },
        { question: "What is the largest freshwater lake (by surface area) in the world?", options: ["Lake Superior","Lake Victoria","Lake Baikal","Lake Tanganyika"], answer: 0, hint: "It’s shared by the U.S. and Canada." }
    ],

    "GENERAL KNOWLEDGE": [
        { question: "What is the largest organ in the human body?", options: ["Heart","Liver","Brain","Skin"], answer: 3, hint: "It covers your entire body and protects you from the outside world." },
        { question: "Who was the first person to walk on the Moon?", options: ["Buzz Aldrin","Neil Armstrong","Yuri Gagarin","Michael Collins"], answer: 1, hint: "He famously said 'one small step for man, one giant leap for mankind' in 1969." },
        { question: "What is the hardest natural substance on Earth?", options: ["Diamond","Steel","Titanium","Graphene"], answer: 0, hint: "It's a form of carbon and rates 10 on the Mohs hardness scale." },
        { question: "Which gas do plants absorb from the atmosphere during photosynthesis?", options: ["Oxygen","Nitrogen","Carbon dioxide","Hydrogen"], answer: 2, hint: "Humans and animals exhale this gas." },
        { question: "What is the currency of Japan?", options: ["Yuan","Yen","Won","Ringgit"], answer: 1, hint: "Its symbol is ¥." },
        { question: "Mount Everest is located in which mountain range?", options: ["Alps","Andes","Himalayas","Rockies"], answer: 2, hint: "This mountain range stretches across several Asian countries including Nepal and Tibet." },
        { question: "Who developed the theory of relativity?", options: ["Isaac Newton","Albert Einstein","Stephen Hawking","Niels Bohr"], answer: 1, hint: "This German-born physicist's equation E=mc² is world-famous." },
        { question: "How many bones are in the adult human body?", options: ["186","206","226","246"], answer: 1, hint: "Babies are born with more bones that fuse together as they grow." },
        { question: "What is the longest river in the world?", options: ["Amazon River","Nile River","Yangtze River","Mississippi River"], answer: 1, hint: "It flows through northeastern Africa and is approximately 6,650 km long." },
        { question: "In which year did the Titanic sink?", options: ["1910","1916","1918","1912"], answer: 3, hint: "It happened on its maiden voyage after hitting an iceberg in the North Atlantic." }
    ],

    "MATHEMATICS": [
        { question: "If f(x) = 2x² + 3x + 1, what is f(2)?", options: ["11","15","14","13"], answer: 1, hint: "Substitute x = 2 into the function and simplify." },
        { question: "Find the derivative of f(x) = 3x² + 5x² + 2x + 7.", options: ["9x² + 10x + 2","6x² + 5x + 2","9x² + 5x + 2","3x² + 5x + 2"], answer: 2, hint: "Differentiate each term separately using power rule." },
        { question: "Evaluate ∫(2x) dx.", options: ["2x²","x² + C","x² + 2","x² + C"], answer: 1, hint: "Integral of x^n = x^(n+1)/(n+1) + C." },
        { question: "If A = [[1,2],[3,4]], what is det(A)?", options: ["10","0","-2","2"], answer: 2, hint: "Determinant = ad - bc." },
        { question: "What is the value of sin²(x) + cos²(x)?", options: ["0","1","sin(2x)","2"], answer: 1, hint: "This is a basic trigonometric identity." },
        { question: "If log₃(81) = x, find x.", options: ["4","3","2","9"], answer: 0, hint: "81 = 3^4." },
        { question: "If the probability of event A is 0.4 and B is 0.5, find P(A ∩ B).", options: ["0.2","0.9","0.45","0.25"], answer: 0, hint: "For independent events, multiply their probabilities." },
        { question: "Find the limit: lim(x→0) (sin x / x).", options: ["0","1","Infinity","Does not exist"], answer: 1, hint: "It's a standard trigonometric limit." },
        { question: "The eigenvalues of matrix [[2,0],[0,5]] are:", options: ["7 and 0","2 and 5","5 and -2","0 and 5"], answer: 1, hint: "For diagonal matrices, eigenvalues are diagonal entries." },
        { question: "If f(x) = e^x, what is d²f/dx²?", options: ["e^x","0","x² e^x","e^x + x"], answer: 0, hint: "Derivative of e^x is e^x; second derivative is the same." }
    ]
};

// ---------------- Show Questions ----------------
function showQuestion() {
    const q = questions[currentSubject][currentQuestionIndex];
    document.getElementById("question-text").innerText = q.question;

    const optionsDiv = document.getElementById("options");
    optionsDiv.innerHTML = "";
    q.options.forEach((opt, i) => {
        const btn = document.createElement("button");
        btn.innerText = opt;
        btn.onclick = () => checkAnswer(i);
        optionsDiv.appendChild(btn);
    });

    // Progress
    document.getElementById("progress-text").innerText = `Question ${currentQuestionIndex + 1} of ${questions[currentSubject].length}`;
    const progressPercent = ((currentQuestionIndex)/questions[currentSubject].length)*100;
    document.getElementById("progress").style.width = `${progressPercent}%`;

    // Hint Button
    if (hintsUsed < MAX_HINTS) {
        hintBtn.style.display = "inline-block";
        hintBtn.onclick = () => {
            alert(`💡 Hint: ${q.hint}`);
            hintsUsed++;
            if (hintsUsed >= MAX_HINTS) hintBtn.style.display = "none";
        };
    } else {
        hintBtn.style.display = "none";
    }
}

// ---------------- Check Answer ----------------
function checkAnswer(selected) {
    const q = questions[currentSubject][currentQuestionIndex];
    if (selected === q.answer) score++;
    currentQuestionIndex++;
    if (currentQuestionIndex < questions[currentSubject].length) showQuestion();
    else showResults();
}

// ---------------- Show Results ----------------
function showResults() {
    const timeTaken = Math.floor((Date.now() - quizStartTime)/1000);
    const username = document.getElementById("username").value;
    saveToLeaderboard(username, currentSubject, score, hintsUsed, timeTaken);
    showScreen("result-screen");
    document.getElementById("score-text").innerText = 
        `Your Score: ${score} / ${questions[currentSubject].length}\nHints Used: ${hintsUsed}\nTime Taken: ${formatTime(timeTaken)}`;
}

// ---------------- Leaderboard ----------------
function saveToLeaderboard(name, subject, score, hintsUsed, timeTaken) {
    let leaderboard = JSON.parse(localStorage.getItem("leaderboard")) || [];
    leaderboard.push({ name, subject, score, hintsUsed, timeTaken });
    leaderboard.sort((a,b)=> b.score - a.score || a.timeTaken - b.timeTaken);
    localStorage.setItem("leaderboard", JSON.stringify(leaderboard));
}

function showLeaderboardScreen() {
    showScreen("leaderboard-screen");
    const leaderboardDiv = document.getElementById("leaderboard-list");
    leaderboardDiv.innerHTML = "";
    const leaderboard = JSON.parse(localStorage.getItem("leaderboard")) || [];
    if (leaderboard.length===0) { leaderboardDiv.innerHTML="<p>No scores yet!</p>"; return; }

    leaderboard.forEach((entry,index)=>{
        const div = document.createElement("div");
        div.classList.add("leaderboard-entry");
        let medal = "";
        if (index===0) medal="🥇 "; else if (index===1) medal="🥈 "; else if (index===2) medal="🥉 ";
        div.innerHTML = `
            <span class="rank">${medal}${index+1}</span>
            <span class="name">${entry.name}</span>
            <span class="subject">${entry.subject}</span>
            <span class="score">${entry.score}</span>
            <span class="hints">${entry.hintsUsed}</span>
            <span class="time">${formatTime(entry.timeTaken)}</span>
        `;
        leaderboardDiv.appendChild(div);
    });
}

function formatTime(seconds){ 
    const min=Math.floor(seconds/60); 
    const sec=seconds%60; 
    return `${min.toString().padStart(2,'0')}:${sec.toString().padStart(2,'0')}`; 
}
